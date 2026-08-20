	@ data/maps/RustboroCity_Gym/scripts.inc:106 RustboroCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_202432
gText_Rom_202432: @ 0x08202432
	.string "げんき しとぉや!!\pいきなり だが きみぃ!\nチャンピオンを めざして みないか!\pぼくは トレーナー じゃないけど\nかつ ために ばっちり\lアドバイス できる!\pよし きまった! いっしょに\nポケモン チャンピオン めざそう!\pトレーナーの もくてき といえば\nジムバッジを あつめること だろう\lだが ジムリーダーは てごわい!\pそこで ぼくの でばん というわけだ!\nきみに ばっちり アドバイス するよ!\pここの ジムリーダー ツツジは\nいわタイプの ポケモンの つかいて!\pいわタイプは がんじょう だけど\nみずタイプや くさタイプの\lこうげきは にがて なんだよ!\pジムリーダーに かてたら\nまた ぼくに はなしかけて くれよ!\pじゃ きばってこォー!!{EOS}"
	.if (. - gText_Rom_202432) > 0x14f
	.error "gText_Rom_202432 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202432) < 0x14f
	.space 0x14f - (. - gText_Rom_202432)
	.endif
