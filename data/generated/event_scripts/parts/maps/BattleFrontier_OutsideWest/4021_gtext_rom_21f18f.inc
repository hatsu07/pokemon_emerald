	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:360 BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons
	.globl gText_Rom_21F18F
gText_Rom_21F18F: @ 0x0821F18F
	.string "あそこに あるのが バトルファクトリー\nつよいポケモンを レンタル できるんだ!\pでもさ レンタル ポケモンって\nいったい だれが そだてて いるんだろう?"
	.byte EOS
	.if (. - gText_Rom_21F18F) > 0x4f
	.error "gText_Rom_21F18F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F18F) < 0x4f
	.space 0x4f - (. - gText_Rom_21F18F)
	.endif
