	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:943 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2
	.globl gText_Rom_23FAFD
gText_Rom_23FAFD: @ 0x0823FAFD
	.string "からくりニンギョウ 3ゴウ くいず!\pスーパーボールを うって\nキズぐすりを かうと いくら のこる?$"
	.if (. - gText_Rom_23FAFD) > 0x34
	.error "gText_Rom_23FAFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FAFD) < 0x34
	.space 0x34 - (. - gText_Rom_23FAFD)
	.endif
