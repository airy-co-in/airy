<?php
/**
 * @file
 * st_medicom_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function st_medicom_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_404-not-found:node/58
  $menu_links['main-menu_404-not-found:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => '404 Not Found',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_404-not-found:node/58',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_about-us-one:about-us
  $menu_links['main-menu_about-us-one:about-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About Us One',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us-one:about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about-us',
  );
  // Exported menu link: main-menu_about-us:about-us
  $menu_links['main-menu_about-us:about-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_appointment:node/56
  $menu_links['main-menu_appointment:node/56'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Appointment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_appointment:node/56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_arm-lift-department:node/76
  $menu_links['main-menu_arm-lift-department:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'Arm Lift Department',
    'options' => array(
      'identifier' => 'main-menu_arm-lift-department:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_department-two:taxonomy/term/26',
  );
  // Exported menu link: main-menu_blog-one:blogs
  $menu_links['main-menu_blog-one:blogs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogs',
    'router_path' => 'blogs',
    'link_title' => 'Blog one',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog-one:blogs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blogs',
  );
  // Exported menu link: main-menu_blog:blogs
  $menu_links['main-menu_blog:blogs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogs',
    'router_path' => 'blogs',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:blogs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_brow-lift-department:node/82
  $menu_links['main-menu_brow-lift-department:node/82'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/82',
    'router_path' => 'node/%',
    'link_title' => 'Brow Lift Department',
    'options' => array(
      'identifier' => 'main-menu_brow-lift-department:node/82',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_department-four:taxonomy/term/28',
  );
  // Exported menu link: main-menu_cancer-care:node/62
  $menu_links['main-menu_cancer-care:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Cancer Care',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_cancer-care:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_research:node/62',
  );
  // Exported menu link: main-menu_cancer-center:node/64
  $menu_links['main-menu_cancer-center:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Cancer Center',
    'options' => array(
      'identifier' => 'main-menu_cancer-center:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_cancer-care:node/62',
  );
  // Exported menu link: main-menu_childrens-health:node/62
  $menu_links['main-menu_childrens-health:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Children\'s Health',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_childrens-health:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 1,
    'parent_identifier' => 'main-menu_research:node/62',
  );
  // Exported menu link: main-menu_contact-us:contact
  $menu_links['main-menu_contact-us:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_department-five:taxonomy/term/29
  $menu_links['main-menu_department-five:taxonomy/term/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/29',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Department five',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 0,
      'identifier' => 'main-menu_department-five:taxonomy/term/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:taxonomy/term/25',
  );
  // Exported menu link: main-menu_department-four:taxonomy/term/28
  $menu_links['main-menu_department-four:taxonomy/term/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/28',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Department four',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 0,
      'identifier' => 'main-menu_department-four:taxonomy/term/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:taxonomy/term/25',
  );
  // Exported menu link: main-menu_department-one:taxonomy/term/25
  $menu_links['main-menu_department-one:taxonomy/term/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/25',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Department One',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 0,
      'identifier' => 'main-menu_department-one:taxonomy/term/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:taxonomy/term/25',
  );
  // Exported menu link: main-menu_department-three:taxonomy/term/27
  $menu_links['main-menu_department-three:taxonomy/term/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/27',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Department Three',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 0,
      'identifier' => 'main-menu_department-three:taxonomy/term/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:taxonomy/term/25',
  );
  // Exported menu link: main-menu_department-two:taxonomy/term/26
  $menu_links['main-menu_department-two:taxonomy/term/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/26',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Department Two',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 0,
      'identifier' => 'main-menu_department-two:taxonomy/term/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:taxonomy/term/25',
  );
  // Exported menu link: main-menu_departments:taxonomy/term/25
  $menu_links['main-menu_departments:taxonomy/term/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/25',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Departments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 1,
      'identifier' => 'main-menu_departments:taxonomy/term/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_gallery-one:gallery
  $menu_links['main-menu_gallery-one:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery one',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_gallery-one:gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery:gallery',
  );
  // Exported menu link: main-menu_gallery:gallery
  $menu_links['main-menu_gallery:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_gallery:gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_genetic-disease:node/65
  $menu_links['main-menu_genetic-disease:node/65'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Genetic Disease',
    'options' => array(
      'identifier' => 'main-menu_genetic-disease:node/65',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_childrens-health:node/62',
  );
  // Exported menu link: main-menu_home-page-one:<front>
  $menu_links['main-menu_home-page-one:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home Page One',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home-page-one:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_medical-department:node/71
  $menu_links['main-menu_medical-department:node/71'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/71',
    'router_path' => 'node/%',
    'link_title' => 'Medical Department',
    'options' => array(
      'identifier' => 'main-menu_medical-department:node/71',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_department-one:taxonomy/term/25',
  );
  // Exported menu link: main-menu_medicom-trials:node/62
  $menu_links['main-menu_medicom-trials:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Medicom Trials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_medicom-trials:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_research:node/62',
  );
  // Exported menu link: main-menu_medicom-trials:node/63
  $menu_links['main-menu_medicom-trials:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Medicom Trials',
    'options' => array(
      'identifier' => 'main-menu_medicom-trials:node/63',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_medicom-trials:node/62',
  );
  // Exported menu link: main-menu_meet-the-team:meet-team
  $menu_links['main-menu_meet-the-team:meet-team'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meet-team',
    'router_path' => 'meet-team',
    'link_title' => 'Meet The Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meet-the-team:meet-team',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_member-detail:member-detail
  $menu_links['main-menu_member-detail:member-detail'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'member-detail',
    'router_path' => 'member-detail',
    'link_title' => 'Member Detail',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_member-detail:member-detail',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_pages:patients-and-families
  $menu_links['main-menu_pages:patients-and-families'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'patients-and-families',
    'router_path' => 'patients-and-families',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pages:patients-and-families',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_patients-and-families:patients-and-families
  $menu_links['main-menu_patients-and-families:patients-and-families'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'patients-and-families',
    'router_path' => 'patients-and-families',
    'link_title' => 'Patients and families',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_patients-and-families:patients-and-families',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_portfolio-one:portfolio
  $menu_links['main-menu_portfolio-one:portfolio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio',
    'router_path' => 'portfolio',
    'link_title' => 'Portfolio one',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio-one:portfolio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_portfolio:portfolio
  $menu_links['main-menu_portfolio:portfolio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio',
    'router_path' => 'portfolio',
    'link_title' => 'Portfolio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio:portfolio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_pricing-table:node/60
  $menu_links['main-menu_pricing-table:node/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Pricing table',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pricing-table:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_research:node/62
  $menu_links['main-menu_research:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_research:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_rhinoplasty-department:node/84
  $menu_links['main-menu_rhinoplasty-department:node/84'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/84',
    'router_path' => 'node/%',
    'link_title' => 'Rhinoplasty Department',
    'options' => array(
      'identifier' => 'main-menu_rhinoplasty-department:node/84',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_department-five:taxonomy/term/29',
  );
  // Exported menu link: main-menu_services:node/57
  $menu_links['main-menu_services:node/57'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:node/57',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_shop:shop
  $menu_links['main-menu_shop:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'shop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'mega' => 0,
      'identifier' => 'main-menu_shop:shop',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_shortcodes:node/59
  $menu_links['main-menu_shortcodes:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Shortcodes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shortcodes:node/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:patients-and-families',
  );
  // Exported menu link: main-menu_tummy-tuck-department:node/79
  $menu_links['main-menu_tummy-tuck-department:node/79'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79',
    'router_path' => 'node/%',
    'link_title' => 'Tummy Tuck Department',
    'options' => array(
      'identifier' => 'main-menu_tummy-tuck-department:node/79',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_department-three:taxonomy/term/27',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('404 Not Found');
  t('About Us');
  t('About Us One');
  t('Appointment');
  t('Arm Lift Department');
  t('Blog');
  t('Blog one');
  t('Brow Lift Department');
  t('Cancer Care');
  t('Cancer Center');
  t('Children\'s Health');
  t('Contact Us');
  t('Department One');
  t('Department Three');
  t('Department Two');
  t('Department five');
  t('Department four');
  t('Departments');
  t('Gallery');
  t('Gallery one');
  t('Genetic Disease');
  t('Home');
  t('Home Page One');
  t('Medical Department');
  t('Medicom Trials');
  t('Meet The Team');
  t('Member Detail');
  t('Pages');
  t('Patients and families');
  t('Portfolio');
  t('Portfolio one');
  t('Pricing table');
  t('Research');
  t('Rhinoplasty Department');
  t('Services');
  t('Shortcodes');
  t('Tummy Tuck Department');
  t('shop');


  return $menu_links;
}
