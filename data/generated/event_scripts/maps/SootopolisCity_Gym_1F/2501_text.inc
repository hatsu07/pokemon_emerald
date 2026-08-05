	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:191 SootopolisCity_Gym_1F_Text_JuanDefeat (+1 aliases)
	.globl gText_Rom_20E65F
gText_Rom_20E65F: @ 0x0820E65F
	.string "たははは! ユー アー ウィナー!\nすなわち わたくしの まけです\pユーには だれにも まけない\nさいのうの きらめきが かんじられます!\pしかし わたくしや ミクリに くらべると\nちょっと はなやかさが たりませんな!\pわたしの ふくでも\nかして あげましょうか?\p…… …… ……\n…… …… ……\pはっはっは ジョークですよ!\nユーには ふくの かわりに\lこの レインバッジを さしあげましょう!$"
	.if (. - gText_Rom_20E65F) > 0xca
	.error "gText_Rom_20E65F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E65F) < 0xca
	.space 0xca - (. - gText_Rom_20E65F)
	.endif
