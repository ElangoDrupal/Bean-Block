<?php

function theme_BeanBlockMoreLink(&$variables){
  return l($variables['text'], $variables['path'], array('attributes' => array('class' => array('Show More'))));
}
