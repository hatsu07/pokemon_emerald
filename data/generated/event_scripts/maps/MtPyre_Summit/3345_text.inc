	@ data/maps/MtPyre_Summit/scripts.inc:520 MtPyre_Summit_Text_GroudonKyogreAwakened
	.globl gText_Rom_217423
gText_Rom_217423: @ 0x08217423
	.string "なんと……\nグラードンと カイオーガが\lめざめて しまったと いうのか……\pかつて 2ひきの ポケモンの\nいかりを しずめたのが\lあいいろのたまと べにいろのたまだと\lそう いわれておる……\pそして そのたまの しんの もちぬしが\nどこかに いると いうのだが……\pそれが ひと なのか\nあるいは ポケモン なのか\pこればっかりは\nだれにも わからんのだよ……{EOS}"
	.if (. - gText_Rom_217423) > 0xb5
	.error "gText_Rom_217423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217423) < 0xb5
	.space 0xb5 - (. - gText_Rom_217423)
	.endif
