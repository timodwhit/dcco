<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
  <div class="site-wrapper">
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  </div> 
  <div id="footer">
    <div class="scene">
      <div class="foreground">
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/mountain.svg" class="mountain mountain-sm" />
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/mountain.svg" class="mountain mountain-lg" />
      </div>
      <div class="middleground">
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/cloud-lg.svg" class="cloud cloud-lg" />
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/mountain.svg" class="mountain mountain-sm" />
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/mountain.svg" class="mountain mountain-lg" />
      </div>
      <div class="background">
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/cloud-lg.svg" class="cloud cloud-lg" />
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/cloud-sm.svg" class="cloud cloud-sm" />
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/mountain.svg" class="mountain mountain-sm" />
        <img src="<?php print drupal_get_path('theme', 'dcco2013'); ?>/images/mountain.svg" class="mountain mountain-lg" />
      </div>
    </div>
  </div>
   
</body>
</html>
