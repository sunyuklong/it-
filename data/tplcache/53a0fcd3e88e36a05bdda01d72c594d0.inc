<div class="tb-item dm">
<a href="{dede:field name='typeurl'/}" class="
{dede:php}
$thisid = $refObj->Fields['id'];
$dsql->SetQuery('Select * from `dede_arctype` where reid='.$thisid.' ORDER BY sortrank');
$dsql->Execute();
$i=0;
while($arr = $dsql->getArray()){
$i = $i +1;
$str = implode(',',$arr);
    if(!empty($str) && $i==1){
        echo 'item-link item-link-2'; 
    }	
}
if(empty($str)) echo 'nav-item nav-item-2';
{/dede:php}
">{dede:field name='typename'/}</a>
{dede:php}
$thisid = $refObj->Fields['id'];
$dsql->SetQuery("Select * from `dede_arctype` where reid=".$thisid." ORDER BY sortrank");
$dsql->Execute();
$i=0;
while($arr = $dsql->getArray()){
$i = $i +1;
$str = implode(',',$arr);
if(!empty($str) && $i==1){
 echo '<div id="dy" class="menu feed"><ul class="mn_con">'; 
}
}
{/dede:php}
{dede:channel type='son' noself='yes'}
<li><a href="[field:typelink/]">[field:typename/]</a></li>
{/dede:channel}
{dede:php}
$thisid = $refObj->Fields['id'];
$dsql->SetQuery("Select * from `dede_arctype` where reid=".$thisid." ORDER BY sortrank");
$dsql->Execute();
$i=0;
while($arr = $dsql->getArray()){
$i = $i +1;
$str = implode(',',$arr);
}
if(!empty($str)) echo '</ul></div>';
{/dede:php}
 </div>