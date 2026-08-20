	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:33 FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat
	.globl gText_Rom_204CCE
gText_Rom_204CCE: @ 0x08204CCE
	.string "レコードコーナー つかってるかい?\pレコードって きろくの ことだろ\nきろくが いろいろ まざるって……\pよく わかんないけど すごいよな!\nワクワク しちゃうよ!{EOS}"
	.if (. - gText_Rom_204CCE) > 0x53
	.error "gText_Rom_204CCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204CCE) < 0x53
	.space 0x53 - (. - gText_Rom_204CCE)
	.endif
