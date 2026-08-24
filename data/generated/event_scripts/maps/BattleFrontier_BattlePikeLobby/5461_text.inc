	@ field-script:0x23341B FieldScriptText_233707
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233707
gText_Rom_233707: @ 0x08233707
	.string "……　おきゃくさま\pバトルゲームに　さんかできる\nポケモンが　3ひき　おりません……\pさんかには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　ごようい　ください\pまた　もたせる　どうぐも　すべて\nちがうもので　なければ　いけません……\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません\pじゅんびが　ととのいましたら\nまた　おこしください……"
	.byte EOS
	.if (. - gText_Rom_233707) != 0xb9
	.error "gText_Rom_233707 must retain its original byte length"
	.endif
	.globl gText_Rom_2337A4
	.set gText_Rom_2337A4, gText_Rom_233707 + 0x9d
	@ field-script:0x233428 FieldScriptText_2337C0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2337C0
gText_Rom_2337C0: @ 0x082337C0
	.string "……　おきゃくさま\pバトルゲームに　さんかできる\nポケモンが　3ひき　おりません……\pさんかには　すべて　ちがう　しゅるいの\nポケモンを　3ひき　ごようい　ください\pまた　もたせる　どうぐも　すべて\nちがうもので　なければ　いけません……\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません\pじゅんびが　ととのいましたら\nまた　おこしください……"
	.byte EOS
	.if (. - gText_Rom_2337C0) != 0xae
	.error "gText_Rom_2337C0 must retain its original byte length"
	.endif
	.globl gText_Rom_233852
	.set gText_Rom_233852, gText_Rom_2337C0 + 0x92
	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:336 BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons
	.globl gText_Rom_23386E
gText_Rom_23386E: @ 0x0823386E
	.string "それでは ゲームに ちょうせんする\nポケモンを 3ひき おえらび ください……"
	.byte EOS
	.if (. - gText_Rom_23386E) > 0x28
	.error "gText_Rom_23386E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23386E) < 0x28
	.space 0x28 - (. - gText_Rom_23386E)
	.endif
