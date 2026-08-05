	@ data/text/apprentice.inc:703 gText_ApprenticeWhichMove5
	.globl gText_Rom_271DF3
gText_Rom_271DF3: @ 0x08271DF3
	.string "あー いそがしい いそがしい!\nおっと きみは {PLAYER}{KUN}!\lちょうしは どう?\pこっちはさ! けさ おきてから\nジョギング スイミング クッキング\lいそがしいの なんのって……!\pオレの {STR_VAR_1}に\nおしえさせる わざも きまんなくてねー\pあのさ!\n{STR_VAR_2} って よさそうじゃん?\lでも {STR_VAR_3} も イイよね!\p{PLAYER}{KUN}の アドバイス たのむよ!\nどっちの わざが イイかな?$"
	.if (. - gText_Rom_271DF3) > 0xb9
	.error "gText_Rom_271DF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271DF3) < 0xb9
	.space 0xb9 - (. - gText_Rom_271DF3)
	.endif
