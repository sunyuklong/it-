<li><a href="[field:arcurl/]" target="_blank" class="list_thumbnail"><img src="[field:litpic/]" width="100" height="100"></a>            <div class="block">                <h2><a href="[field:arcurl/]" target="_blank">[field:fulltitle/]</a><span class="state other">[field:pubdate function="MyDate('m月d日',@me)"/]</span></h2>                <div class="memo"><p>[field:description/]</p></div>                <span class="tags"><strong>Tags：</strong>[field:id runphp='yes']
global $cfg_cmspath;
$tags = GetTags(@me);
$revalue = '';
$tags = explode(',', $tags);
foreach($tags as $key => $value){
            if($value){
                $revalue .= '<a href="'.$cfg_cmspath.'/tags.php?/'.$value.'/">'.$value.'</a>, ';
   }
  }
@me = substr($revalue,0,-2);
[/field:id]</span></div>          </li>