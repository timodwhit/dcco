<?php if($content['field_slider_style'][0]['#markup'] == 'wide'): ?>
  <div class="slider-wide-slider clearfix"><?php print render($content['cu_slider_wide_entity_view_1']); ?></div>
<?php elseif($content['field_slider_style'][0]['#markup'] == 'medium'): ?>
  <div class="slider-medium-slider clearfix"><?php print render($content['cu_slider_medium_entity_view_1']); ?></div>
<?php elseif($content['field_slider_style'][0]['#markup'] == 'small'): ?>
  <div class="slider-small-slider clearfix"><?php print render($content['cu_slider_small_entity_view_1']); ?></div>
<?php elseif($content['field_slider_style'][0]['#markup'] == 'wide_teaser'): ?>
  <div class="slider-wide-teaser-slider clearfix"><?php print render($content['cu_slider_wide_teaser_entity_view_1']); ?></div>
<?php elseif($content['field_slider_style'][0]['#markup'] == 'large'): ?>
  <div class="slider-wide-teaser-slider clearfix"><?php print render($content['cu_slider_large_entity_view_1']); ?></div>
<?php elseif($content['field_slider_style'][0]['#markup'] == 'original'): ?>
  <div class="slider-wide-teaser-slider clearfix"><?php print render($content['cu_slider_original_entity_view_1']); ?></div>
<?php endif; ?>
