  Feature: Test pathauto
  In order to get nice urls
  As a site administrator
  I need to be able to trust that pathauto works consistently

  Background:
    Given I am logged in as a user with the "administrator" role
      And Panopoly magic live previews are disabled
    When I visit "/node/add/panopoly-test-page"
      And I fill in the following:
        | Title  | Testing title |
        | Editor | plain_text    |
        | Body   | Testing body  |
    # Normally, here we'd press "Publish", however some child distribtions
    # don't use 'save_draft', and this makes this test compatible with them.
    #When I press "Publish"
    When I press "edit-submit"
    Then the "h1" element should contain "Testing title"

  @api @panopoly_admin
  Scenario: Pathauto should automatically assign an url
    Then the url should match "testing-title"
  
  @api @panopoly_admin
  Scenario: Pathauto should keep old url when changing the title
    When I click "Edit" in the "Tabs" region
      And I fill in the following:
        | Title               | Completely other title |
      And I press "Save"
    Then the url should match "testing-title"
    Given I go to "completely-other-title"
    Then the response status code should be 404
  
  @api @panopoly_admin
  Scenario: My own permalink should be kept even if changing title
    When I click "Edit" in the "Tabs" region
      And I fill in the following:
        | Permalink           | my-custom-permalink |
      And I press "Save"
    Then the url should match "my-custom-permalink"
    When I click "Edit" in the "Tabs" region
      And I fill in the following:
        | Title               | Saving Title Again  |
      And I press "Save"
    Then the url should match "my-custom-permalink"
    Given I go to "my-custom-permalink"
    Then the response status code should be 200
