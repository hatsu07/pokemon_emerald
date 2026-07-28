@ Phase 2: ミシロタウン NPCセリフ
@ ROM オフセット: gUnknown_81E27F7 ブロック内
@ Expansion (PokeEm-expansion-CanuseJP) の scripts.inc を参照して復元。
@ {JPN} フォント切替は日本版オリジナルでは使われていないため省略。

	.globl gText_LittlerootTown_FatMan_CanUsePCToStoreItems
gText_LittlerootTown_FatMan_CanUsePCToStoreItems:: @ 0x81E452C (52 bytes)
	.string "パソコンを つかえば\nどうぐや ポケモンが ほぞん できるんだ!\pかがくの ちからって しびれるーっ!$"

	.globl gText_LittlerootTown_Boy_BirchSpendsDaysInLab
gText_LittlerootTown_Boy_BirchSpendsDaysInLab:: @ 0x81E4560 (92 bytes)
	.string "ずーっと けんきゅうしつに こもって\nしらべものを しているかと おもえば\lとつぜん のやまに とびだしていく……\pオダマキはかせって いったい\nいつ うちに かえっているんだろう?$"

	.globl gText_LittlerootTown_Twin_IfYouGoInGrassPokemonWillJumpOut
gText_LittlerootTown_Twin_IfYouGoInGrassPokemonWillJumpOut:: @ 0x81E45BC (53 bytes)
	.string "あの あの あのね!\pここから さきの どうろ\nくさむらに はいると\lやせいの ポケモンが でてくるの!$"

@ Phase 2: ミシロタウン看板テキスト（日本版）
@ 文字コードは data/charmap/charmap.txt。.string は tools/preproc がバイト列へ変換する。
@ 各エントリの占有サイズはオリジナルROMと同じにし、後続データのアドレスを維持する。

	.globl gText_LittlerootTown_Sign_ProfBirchsLab
gText_LittlerootTown_Sign_ProfBirchsLab:: @ 0x81E46C2 (20 bytes)
	.string "「オダマキ ポケモン けんきゅうじょ」$"

	.globl gText_LittlerootTown_Sign_PlayersHouse
gText_LittlerootTown_Sign_PlayersHouse:: @ 0x81E46D6 (9 bytes)
	.string "「{PLAYER}の いえ」$"

	.globl gText_LittlerootTown_Sign_ProfBirchsHouse
gText_LittlerootTown_Sign_ProfBirchsHouse:: @ 0x81E46DF (15 bytes)
	.string "「オダマキ はかせの いえ」$"