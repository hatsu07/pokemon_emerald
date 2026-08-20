	@ data/maps/VerdanturfTown/scripts.inc:76 VerdanturfTown_Text_GuyTryingToBustThroughCave
	.globl gText_Rom_1E623D
gText_Rom_1E623D: @ 0x081E623D
	.string "フレンドリィ ショップの となりに\nどうくつが あるだろ?\pなかを ふさいでいる いわを こわし\nとおれるように しようと がんばっている\lやつが いるらしいんだ!\pとおれるように なると いいのに……\nカナズミにも いきやすく なるから!{EOS}"
	.if (. - gText_Rom_1E623D) > 0x79
	.error "gText_Rom_1E623D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E623D) < 0x79
	.space 0x79 - (. - gText_Rom_1E623D)
	.endif
