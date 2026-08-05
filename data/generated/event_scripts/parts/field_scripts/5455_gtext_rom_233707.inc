	@ field-script:0x23341B FieldScriptText_233707
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233707
gText_Rom_233707: @ 0x08233707
	.string "……　おきゃくさま\pバトルゲームに　さんかできる\nポケモンが　3ひき　おりません……\pさんかには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　ごようい　ください\pまた　もたせる　どうぐも　すべて\nちがうもので　なければ　いけません……\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません\pじゅんびが　ととのいましたら\nまた　おこしください……"
	.byte EOS
	.if (. - gText_Rom_233707) != 0xb9
	.error "gText_Rom_233707 must retain its original byte length"
	.endif
