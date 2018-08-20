<?php

function theme_focusOnMoreLink(&$variables){
  return l($variables['text'], $variables['path'], array('attributes' => array('class' => array('more_link'))));
}
