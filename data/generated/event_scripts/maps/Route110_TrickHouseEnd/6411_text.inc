	@ data/maps/Route110_TrickHouseEnd/scripts.inc:277 Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry
	.globl gText_Rom_23DC3B
gText_Rom_23DC3B: @ 0x0823DC3B
	.string "ど どうしよう……\nもう カラクリの ネタが\lつきて しまった……\lまた ぜんこく かくちを まわって\lしかけを いろいろ かんがえて くるか……"
	.byte EOS
	.if (. - gText_Rom_23DC3B) > 0x4a
	.error "gText_Rom_23DC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DC3B) < 0x4a
	.space 0x4a - (. - gText_Rom_23DC3B)
	.endif
