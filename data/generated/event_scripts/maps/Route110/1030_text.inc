	@ data/maps/Route110/scripts.inc:941 Route110_Text_TrainerTipsRegisterItems
	.globl gText_Rom_1E9F56
gText_Rom_1E9F56: @ 0x081E9F56
	.string "おとくな けいじばん!!\pバッグに いれた どうぐは\nセレクトボタンを おすと じゅんばんを\lいれかえる ことが できます!{EOS}"
	.if (. - gText_Rom_1E9F56) > 0x3f
	.error "gText_Rom_1E9F56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9F56) < 0x3f
	.space 0x3f - (. - gText_Rom_1E9F56)
	.endif
