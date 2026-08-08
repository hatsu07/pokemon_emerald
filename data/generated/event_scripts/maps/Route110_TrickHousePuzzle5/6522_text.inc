	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:922 Route110_TrickHousePuzzle5_Text_WaitForNextChallenge
	.globl gText_Rom_23F9B9
gText_Rom_23F9B9: @ 0x0823F9B9
	.string "マタノ ちゃれんじ オマチシテマース!$"
	.if (. - gText_Rom_23F9B9) > 0x14
	.error "gText_Rom_23F9B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9B9) < 0x14
	.space 0x14 - (. - gText_Rom_23F9B9)
	.endif
