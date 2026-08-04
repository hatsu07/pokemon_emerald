@ スターターポケモンの種族IDテーブル
@ このファイルを編集することで、最初に選ぶポケモンを変更できます。
@ 種族IDは constants/species.inc で定義。
@ 元ROM上の配置: 0x08590C08
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

@ 元の0x08590C0E〜0x08590C0Fを保持し、ブロック全体を8バイトにする。
	.space 0x2, 0x00
