	@ data/text/apprentice.inc:661 gText_ApprenticeWhichMon14
	.globl gText_Rom_2718A6
gText_Rom_2718A6: @ 0x082718A6
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lちょっと…… そうだん させて くれよ\pは はずかしいん だけどさ!\nつかいたい ポケモンで なやんでててさ\l{STR_VAR_1}と {STR_VAR_2}だったら\lどっちを つかったら いい かな……?$"
	.if (. - gText_Rom_2718A6) > 0x7f
	.error "gText_Rom_2718A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2718A6) < 0x7f
	.space 0x7f - (. - gText_Rom_2718A6)
	.endif
