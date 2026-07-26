	.include "constants/constants.inc"

@ スターターポケモンの種族IDテーブル
@ このファイルを編集することで、最初に選ぶポケモンを変更できます。
@ 種族IDは constants/species_constants.inc で定義。
@
@ 書式: .hword SPECIES_<ポケモン名>
@ 例：ヒトカゲにする場合 → .hword SPECIES_CHARMANDER
@
@ 注意: 現在は3匹固定ですが、増やす場合は GetStarterPokemon 関数内の
@ 上限値チェック（cmp r1, #3）も合わせて変更してください。
	.globl gStarterPokemonTable
gStarterPokemonTable:
	.hword SPECIES_TREECKO  @ 0: キモリ (くさ)
	.hword SPECIES_TORCHIC  @ 1: アチャモ (ほのお)
	.hword SPECIES_MUDKIP   @ 2: ミズゴロウ (みず)

@ スターターポケモンのスプライト表示位置（X座標, Y座標 のペア × 3匹）
	.globl gStarterPokemonSpritePositions
gStarterPokemonSpritePositions:
	.byte 60, 120  @ 0: 1匹目のスプライト位置 (X, Y)
	.byte 88, 180  @ 1: 2匹目のスプライト位置 (X, Y)
	.byte 64, 180  @ 2: 3匹目のスプライト位置 (X, Y)