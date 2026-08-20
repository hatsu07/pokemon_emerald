	@ data/maps/Route118/scripts.inc:246 Route118_Text_StevenQuestions
	.globl gText_Rom_1ECAEB
gText_Rom_1ECAEB: @ 0x081ECAEB
	.string "ダイゴ『やあ {PLAYER}{KUN}！\pムロタウンの どうくつで あった\nダイゴだよ！\pあれから きみは どれだけ\nたくさんの ポケモンに であったかな？\pこの ひろい せかいには\nさまざまな ポケモンが いるんだ\pすきな タイプの ポケモン ばかりを\nそだてるのも いいだろう\pあるいは いろんな タイプの ポケモンを\nそだてるのも たのしい だろう……\pきみは ポケモン トレーナーとして\nどう かんがえてる？\pボクが きにする ことじゃない けどね\pじゃあ\nまた あえると いいね{EOS}"
	.if (. - gText_Rom_1ECAEB) > 0xed
	.error "gText_Rom_1ECAEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ECAEB) < 0xed
	.space 0xed - (. - gText_Rom_1ECAEB)
	.endif
