<?php

function theme_focusOnMoreLink(&$variables){
  dpm($variables);
  return l($variables['text'], $variables['path'], array('attributes' => array('class' => array('more_link'))));
}
