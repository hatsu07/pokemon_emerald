@ Phase 2: ミシロタウン看板テキスト（日本版）
@ 文字コードは charmap.txt。.string は tools/preproc がバイト列へ変換する。
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