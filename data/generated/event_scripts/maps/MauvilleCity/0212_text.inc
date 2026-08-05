	@ data/maps/MauvilleCity/scripts.inc:641 MauvilleCity_Text_GymSign
	.globl gText_Rom_1DE5BA
gText_Rom_1DE5BA: @ 0x081DE5BA
	.string "キンセツ シティ ポケモンジム\nリーダー テッセン\lあっかるい でんげき オヤジ!$"
	.if (. - gText_Rom_1DE5BA) > 0x2a
	.error "gText_Rom_1DE5BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE5BA) < 0x2a
	.space 0x2a - (. - gText_Rom_1DE5BA)
	.endif
