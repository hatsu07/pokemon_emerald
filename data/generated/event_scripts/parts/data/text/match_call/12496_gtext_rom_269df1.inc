	@ data/text/match_call.inc:619 MatchCall_Text_Mom2
	.globl gText_Rom_269DF1
gText_Rom_269DF1: @ 0x08269DF1
	.string "ママ『あら {PLAYER}\nパパなら まいにち トウカシティの\lジムに こもってるわよ!\pときどき うちに かえってきては\nたくさん ごはんを たべて\lまた でかけて いくの!\pあなたに まけたのが\nよっぽど くやしかった みたいね!"
	.byte EOS
	.if (. - gText_Rom_269DF1) > 0x71
	.error "gText_Rom_269DF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269DF1) < 0x71
	.space 0x71 - (. - gText_Rom_269DF1)
	.endif
