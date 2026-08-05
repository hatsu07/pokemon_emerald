	@ data/text/trainers.inc:431 Route107_Text_DarrinPostBattle
	.globl gText_Rom_25A80B
gText_Rom_25A80B: @ 0x0825A80B
	.string "うみに うかんで なみに ゆられてると\nふかふかの ベッドで ねてる みたいだよ!$"
	.if (. - gText_Rom_25A80B) > 0x2a
	.error "gText_Rom_25A80B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A80B) < 0x2a
	.space 0x2a - (. - gText_Rom_25A80B)
	.endif
