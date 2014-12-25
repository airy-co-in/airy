<div class="procedures">
	<h3>Procedures</h3>
	<div class="panel-group sidebar-nav" id="accordion3">  
	<?php foreach ($procedures_list as $key => $data): ?>
	    <div class="panel panel-sidebar">
	      <div class="panel-heading">
	      <h4 class="panel-title">
	      <a data-toggle="collapse" data-parent="#accordion3" href="#<?php print 'group-' . $key; ?>">
	      <i class="fa fa-angle-right"></i> <?php print $data['name']; ?>
	      </a>
	      </h4>
	      </div>
	      <?php 
					$pars = explode('/', current_path());
					if (isset($pars[1]) && array_key_exists($pars[1], $data['node'])) {
						$class2 = 'in';
					}
					else {
						$class2 = 'collapse';
					}

				?>
	      <div id="<?php print 'group-' . $key; ?>" class="panel-collapse <?php print $class2; ?>">
	        <div class="panel-body">
	        	<?php foreach ($data['node'] as $node): ?>	
		        	<?php 
		        		if (current_path() == 'node/' . $node['nid']) {
									$class = 'active';									
								}
								else {
									$class = '';
								}
							?>        		
        			<a class="<?php print $class; ?>" href="<?php print url('node/' . $node['nid']); ?>"><i class="fa fa-angle-right"></i> <?php print $node['title']; ?></a>	                  			
          	<?php endforeach; ?>
	        </div>
	      </div>
	    </div>    		
	<?php endforeach; ?>
	</div>
</div>
