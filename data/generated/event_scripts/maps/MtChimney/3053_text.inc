	@ data/maps/MtChimney/scripts.inc:622 MtChimney_Text_Grunt2PostBattle
	.globl gText_Rom_215384
gText_Rom_215384: @ 0x08215384
	.string "オレらの リーダーは\n「みんなが よろこぶ ことだ」って\lいってるんだ!\pなのに なんで みんな ジャマするんだ?{EOS}"
	.if (. - gText_Rom_215384) > 0x3a
	.error "gText_Rom_215384 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215384) < 0x3a
	.space 0x3a - (. - gText_Rom_215384)
	.endif
