[1mdiff --git a/app/assets/javascripts/pages.coffee b/app/assets/javascripts/pages.coffee[m
[1mnew file mode 100644[m
[1mindex 0000000..24f83d1[m
[1m--- /dev/null[m
[1m+++ b/app/assets/javascripts/pages.coffee[m
[36m@@ -0,0 +1,3 @@[m
[32m+[m[32m# Place all the behaviors and hooks related to the matching controller here.[m
[32m+[m[32m# All this logic will automatically be available in application.js.[m
[32m+[m[32m# You can use CoffeeScript in this file: http://coffeescript.org/[m
[1mdiff --git a/app/assets/stylesheets/pages.scss b/app/assets/stylesheets/pages.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..31cb8fb[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/pages.scss[m
[36m@@ -0,0 +1,3 @@[m
[32m+[m[32m// Place all the styles related to the Pages controller here.[m
[32m+[m[32m// They will automatically be included in application.css.[m
[32m+[m[32m// You can use Sass (SCSS) here: http://sass-lang.com/[m
[1mdiff --git a/app/controllers/pages_controller.rb b/app/controllers/pages_controller.rb[m
[1mnew file mode 100644[m
[1mindex 0000000..45f463e[m
[1m--- /dev/null[m
[1m+++ b/app/controllers/pages_controller.rb[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32mclass PagesController < ApplicationController[m
[32m+[m[32m  def home[m
[32m+[m[32m  end[m
[32m+[m[32mend[m
[1mdiff --git a/app/helpers/pages_helper.rb b/app/helpers/pages_helper.rb[m
[1mnew file mode 100644[m
[1mindex 0000000..2c057fd[m
[1m--- /dev/null[m
[1m+++ b/app/helpers/pages_helper.rb[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32mmodule PagesHelper[m
[32m+[m[32mend[m
[1mdiff --git a/app/views/pages/home.html.erb b/app/views/pages/home.html.erb[m
[1mnew file mode 100644[m
[1mindex 0000000..354b397[m
[1m--- /dev/null[m
[1m+++ b/app/views/pages/home.html.erb[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m<h1>Welcome to the Git Demo Web App</h1>[m
[32m+[m
[1mdiff --git a/config/routes.rb b/config/routes.rb[m
[1mindex 787824f..4aee8d9 100644[m
[1m--- a/config/routes.rb[m
[1m+++ b/config/routes.rb[m
[36m@@ -1,3 +1,5 @@[m
 Rails.application.routes.draw do[m
[32m+[m[32m  root to: 'pages#home'[m
[32m+[m[32m  get 'home', to: 'pages#home', as: 'home'[m
   # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html[m
 end[m
[1mdiff --git a/test/controllers/pages_controller_test.rb b/test/controllers/pages_controller_test.rb[m
[1mnew file mode 100644[m
[1mindex 0000000..56c712a[m
[1m--- /dev/null[m
[1m+++ b/test/controllers/pages_controller_test.rb[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mrequire 'test_helper'[m
[32m+[m
[32m+[m[32mclass PagesControllerTest < ActionDispatch::IntegrationTest[m
[32m+[m[32m  test "should get home" do[m
[32m+[m[32m    get pages_home_url[m
[32m+[m[32m    assert_response :success[m
[32m+[m[32m  end[m
[32m+[m
[32m+[m[32mend[m
