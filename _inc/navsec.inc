<ul id="navsec">

<?php if ( $loc[0] == 1 ) { ?>

    <li <?php if ( $loc[1] == 1 ) echo 'class="current"';?>><a href="#na">Secondary nav</a></li>
    <li <?php if ( $loc[1] == 2 ) echo 'class="current"';?>><a href="#na">Another item</a></li>
    <li <?php if ( $loc[1] == 3 ) echo 'class="current"';?>><a href="#na">Short</a></li>
    <li <?php if ( $loc[1] == 4 ) echo 'class="current"';?>><a href="#na">Longer navigation</a></li>
    <li <?php if ( $loc[1] == 5 ) echo 'class="current"';?>><a href="#na">Heres one more</a></li>
    <li <?php if ( $loc[1] == 6 ) echo 'class="current"';?>><a href="#na">Last one</a></li>
    
<?php } if ( $loc[0] == 2 ) { ?>
    
    <li <?php if ( $loc[1] == 1 ) echo 'class="current"';?>><a href="#na">Secondary nav</a></li>
    <li <?php if ( $loc[1] == 2 ) echo 'class="current"';?>><a href="#na">Another item</a>
        <ul>
            <li <?php if ( $loc[2] == 1 ) echo 'class="current"';?>><a href="#na">Tertiary level</a></li>
            <li <?php if ( $loc[2] == 2 ) echo 'class="current"';?>><a href="#na">Longer navigation</a>
                <ul>
                    <li <?php if ( $loc[3] == 1 ) echo 'class="current"';?>><a href="#na">Quadrupidoodledoo level</a></li>
                    <li <?php if ( $loc[3] == 2 ) echo 'class="current"';?>><a href="#na">Another item</a></li>
                    <li <?php if ( $loc[3] == 3 ) echo 'class="current"';?>><a href="#na">Short</a></li>
                    <li <?php if ( $loc[3] == 4 ) echo 'class="current"';?>><a href="#na">Longer navigation</a></li>
                    <li <?php if ( $loc[3] == 5 ) echo 'class="current"';?>><a href="#na">Heres one more</a></li>
                    <li <?php if ( $loc[3] == 6 ) echo 'class="current"';?>><a href="#na">Last one</a></li>                    
                </ul>
            </li>
            <li <?php if ( $loc[2] == 3 ) echo 'class="current"';?>><a href="#na">Heres one more</a>
                <ul>
                    <li <?php if ( $loc[3] == 1 ) echo 'class="current"';?>><a href="#na">Quadrupidoodledoo level</a></li>
                    <li <?php if ( $loc[3] == 2 ) echo 'class="current"';?>><a href="#na">Another item</a></li>
                    <li <?php if ( $loc[3] == 3 ) echo 'class="current"';?>><a href="#na">Short</a></li>
                    <li <?php if ( $loc[3] == 4 ) echo 'class="current"';?>><a href="#na">Longer navigation</a></li>
                    <li <?php if ( $loc[3] == 5 ) echo 'class="current"';?>><a href="#na">Heres one more</a></li>
                    <li <?php if ( $loc[3] == 6 ) echo 'class="current"';?>><a href="#na">Last one</a></li>                    
                </ul>
            </li>
            <li <?php if ( $loc[2] == 4 ) echo 'class="current"';?>><a href="#na">Last one</a></li>
        </ul>
    </li>
    <li <?php if ( $loc[1] == 3 ) echo 'class="current"';?>><a href="#na">Short</a></li>
    <li <?php if ( $loc[1] == 4 ) echo 'class="current"';?>><a href="#na">Longer navigation</a></li>
    <li <?php if ( $loc[1] == 5 ) echo 'class="current"';?>><a href="#na">Heres one more</a></li>
    <li <?php if ( $loc[1] == 6 ) echo 'class="current"';?>><a href="#na">Last one</a></li>

<?php } if ( $loc[0] == 3 ) { ?>

    <li <?php if ( $loc[1] == 1 ) echo 'class="current"';?>><a href="#na">Secondary nav</a></li>
    <li <?php if ( $loc[1] == 2 ) echo 'class="current"';?>><a href="#na">Another item</a></li>
    <li <?php if ( $loc[1] == 3 ) echo 'class="current"';?>><a href="#na">Short</a></li>
    <li <?php if ( $loc[1] == 4 ) echo 'class="current"';?>><a href="#na">Longer navigation</a></li>
    <li <?php if ( $loc[1] == 5 ) echo 'class="current"';?>><a href="#na">Heres one more</a></li>
    <li <?php if ( $loc[1] == 6 ) echo 'class="current"';?>><a href="#na">Last one</a></li>
    
<?php } ?>
    
</ul>
