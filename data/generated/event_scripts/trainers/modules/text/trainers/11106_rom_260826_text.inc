	@ data/text/trainers.inc:2741 Route125_Text_SharonPostBattle
	.globl gText_Rom_260826
gText_Rom_260826: @ 0x08260826
	.string "あなたの つよさは ホンモノね!\nおどろいたわ!$"
	.if (. - gText_Rom_260826) > 0x19
	.error "gText_Rom_260826 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260826) < 0x19
	.space 0x19 - (. - gText_Rom_260826)
	.endif
