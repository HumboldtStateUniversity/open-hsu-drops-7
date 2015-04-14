<!-- Indicators -->
<ol class="carousel-indicators">
  <?php for ($i = 0; $i <= ($items-1); $i++): ?>
  <li data-target="#<?php print $target;?>" data-slide-to="<?php print $i ?>"
    <?php print ($i === 0 ) ?  ' class="active"': ''; ?>></li>
  <?php endfor;?>
</ol>
