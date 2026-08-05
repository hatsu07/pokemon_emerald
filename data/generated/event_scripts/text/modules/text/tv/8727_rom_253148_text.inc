	@ data/text/tv.inc:1201 GabbyAndTy_Text_DescribeYourFeelings
	.globl gText_Rom_253148
gText_Rom_253148: @ 0x08253148
	.string "ほんと!?\nありがとう!\pじゃあ たたかいの あとの\nかんそうを ビシッと ひとことで\lどうぞ!"
	.byte EOS
	.if (. - gText_Rom_253148) > 0x31
	.error "gText_Rom_253148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253148) < 0x31
	.space 0x31 - (. - gText_Rom_253148)
	.endif
