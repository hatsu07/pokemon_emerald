	@ data/maps/RustboroCity/scripts.inc:1042 RustboroCity_Text_GymLeaderIsntEasyWithFire
	.globl gText_Rom_1DF3AA
gText_Rom_1DF3AA: @ 0x081DF3AA
	.string "ジムリーダーに ちょうせん したけど……\pあたしの ほのおタイプの ポケモンじゃ\nちょっと かつのは たいへんそう……\pだって ほのおタイプ って\nいわタイプに あいしょうが わるいもの……{EOS}"
	.if (. - gText_Rom_1DF3AA) > 0x60
	.error "gText_Rom_1DF3AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF3AA) < 0x60
	.space 0x60 - (. - gText_Rom_1DF3AA)
	.endif
