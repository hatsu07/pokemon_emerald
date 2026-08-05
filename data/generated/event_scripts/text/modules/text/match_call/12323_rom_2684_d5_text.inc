	@ data/text/match_call.inc:385 MatchCall_PersonalizedText58
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2684D5
gText_Rom_2684D5: @ 0x082684D5
	.string "や や どうも!\nいま ナツと おたから さがしててさ!\pおたから なんて もしかしたら\nほんとうは ないのかも しれないけど……\pナツと おたからを ふたりで さがす\nって ことが だいじ なんだよね\p……て あれ ナツ?\nな なんで おこってるの?\lほっといて ゴメンね\lもちろん キミが いちばん だいじだよぉ\lわかっている だろう?\pじ じゃ…… {PLAYER}さんさようなら$"
	.if (. - gText_Rom_2684D5) != 0xbc
	.error "gText_Rom_2684D5 must retain its original byte length"
	.endif
