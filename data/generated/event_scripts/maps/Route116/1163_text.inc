	@ data/maps/Route116/scripts.inc:363 Route116_Text_DiggingTunnelWhenGoonOrderedMeOut
	.globl gText_Rom_1EBFBC
gText_Rom_1EBFBC: @ 0x081EBFBC
	.string "ぬぉー!!\nなんて ことだ!?\pどうぐも なにも つかわずに\nトンネルを ほっていたのに\lへんな おとこに おいだされた!\pあの トンネルには\nおおきな ものおとに はんのう して\lさわぎだす ポケモンが いる\pだから きかいを つかっての\nかいはつ こうじを やめたのに……\pへんに さわぎを おこされると\nポケモンが おびえないか しんぱいだ!{EOS}"
	.if (. - gText_Rom_1EBFBC) > 0xaf
	.error "gText_Rom_1EBFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EBFBC) < 0xaf
	.space 0xaf - (. - gText_Rom_1EBFBC)
	.endif
