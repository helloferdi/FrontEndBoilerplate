<?php
$ttl = 'Home';
$loc = array(0,0,0,0);
include $_SERVER['DOCUMENT_ROOT'].'/_inc/head.inc';?>

<div id="maincontent">

    <h1>H1. Header</h1>
    <h2>H2. Header</h2>
    <h3>H3. Header</h3>
    <h4>H4. Header</h4>
    <h5>H5. Header</h5>
    
    <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
    <p>Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum</p>
    
    <p><label>Name:</label> <input type="text" value="Summin" class="clear" /></p>
    <p>
        <label>Select:</label>
        <select>
            <option>Hello</option>
        </select>
    </p>
    <p><label>Textarea</label><textarea class="clear">Hello</textarea></p>
    <p><button><span>Submit</span></button></p>
    
</div>

<?php include $_SERVER['DOCUMENT_ROOT'].'/_inc/footer.inc'; ?>