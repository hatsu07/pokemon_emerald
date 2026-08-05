	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:910 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3
	.globl gText_Rom_23F94A
gText_Rom_23F94A: @ 0x0823F94A
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで きゅうけつを\nつかえない ポケモンは どれ?$"
	.if (. - gText_Rom_23F94A) > 0x30
	.error "gText_Rom_23F94A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F94A) < 0x30
	.space 0x30 - (. - gText_Rom_23F94A)
	.endif
