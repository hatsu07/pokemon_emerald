	@ data/maps/Route116/scripts.inc:377 Route116_Text_GoonHightailedItOutOfTunnel
	.globl gText_Rom_1EC06B
gText_Rom_1EC06B: @ 0x081EC06B
	.string "ぬぉー!!\pへんな おとこが とびだしていった!\nこれで トンネルを ほれるよ!{EOS}"
	.if (. - gText_Rom_1EC06B) > 0x29
	.error "gText_Rom_1EC06B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC06B) < 0x29
	.space 0x29 - (. - gText_Rom_1EC06B)
	.endif
