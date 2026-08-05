	@ field-script:0x233428 FieldScriptText_2337C0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2337C0
gText_Rom_2337C0: @ 0x082337C0
	.string "……　おきゃくさま\pバトルゲームに　さんかできる\nポケモンが　3ひき　おりません……\pさんかには　すべて　ちがう　しゅるいの\nポケモンを　3ひき　ごようい　ください\pまた　もたせる　どうぐも　すべて\nちがうもので　なければ　いけません……\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません\pじゅんびが　ととのいましたら\nまた　おこしください……"
	.byte EOS
	.if (. - gText_Rom_2337C0) != 0xae
	.error "gText_Rom_2337C0 must retain its original byte length"
	.endif
