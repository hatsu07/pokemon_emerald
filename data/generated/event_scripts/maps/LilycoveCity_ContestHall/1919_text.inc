	@ data/maps/LilycoveCity_ContestHall/scripts.inc:331 LilycoveCity_ContestHall_Text_EnteredWrongContest
	.globl gText_Rom_207C36
gText_Rom_207C36: @ 0x08207C36
	.string "あわわわ……\nでる コンテスト まちがえた……\pたくましい ポケモンを\nかしこさ コンテストに……\pよ よしっ\nかしこそうな いわくだき たのむぞ！{EOS}"
	.if (. - gText_Rom_207C36) > 0x4b
	.error "gText_Rom_207C36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207C36) < 0x4b
	.space 0x4b - (. - gText_Rom_207C36)
	.endif
