	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:757 Route110_TrickHouseEntrance_Text_PCFullAgain
	.globl gText_Rom_23D62A
gText_Rom_23D62A: @ 0x0823D62A
	.string "エッ! マタ ぱそこんガ\nイッパイ ダッテ……? アンマリダ!"
	.byte EOS
	.if (. - gText_Rom_23D62A) > 0x20
	.error "gText_Rom_23D62A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D62A) < 0x20
	.space 0x20 - (. - gText_Rom_23D62A)
	.endif
