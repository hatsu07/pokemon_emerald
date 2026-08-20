	@ data/maps/LilycoveCity_ContestHall/scripts.inc:379 LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone
	.globl gText_Rom_207FD1
gText_Rom_207FD1: @ 0x08207FD1
	.string "ただ うつくしい だけじゃ\nなかなか かてないわよ！\pあたしの ポケモンみたいに\nおていれして ツヤツヤ じゃなきゃ！{EOS}"
	.if (. - gText_Rom_207FD1) > 0x3c
	.error "gText_Rom_207FD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207FD1) < 0x3c
	.space 0x3c - (. - gText_Rom_207FD1)
	.endif
