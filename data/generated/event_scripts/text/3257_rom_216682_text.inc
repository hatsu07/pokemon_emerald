
	@ trainerbattle-cfg:0x2165F2 TrainerBattleText_216682
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_216682
gText_Rom_216682: @ 0x08216682
	.string "れいげん　あらたかな　やまの　ちからで\nサイコパワーの　アップした　わたしに\lこどもの　おまえが　かてるかな！？$"
	.if (. - gText_Rom_216682) != 0x39
	.error "gText_Rom_216682 must retain its original byte length"
	.endif
	.globl gText_Rom_216687
	.set gText_Rom_216687, gText_Rom_216682 + 0x5
