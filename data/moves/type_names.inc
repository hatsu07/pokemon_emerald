@ Japanese type names as exact raw bytes; ROM-independent source.
@ One macro call emits one 5-byte entry. Japanese text is kept only as a comment.
.include "constants/type.inc"
.include "asm/macros/type_name.inc"

.globl gTypeNames
gTypeNames: @ 0x082EBC88
	type_name_entry gTypeName_Normal, TYPE_NORMAL, 0x69, 0xAE, 0x6F, 0x79, 0xFF @ ノーマル
	type_name_entry gTypeName_Fighting, TYPE_FIGHTING, 0x06, 0x08, 0x14, 0x03, 0xFF @ かくとう
	type_name_entry gTypeName_Flying, TYPE_FLYING, 0x1B, 0x0A, 0x03, 0xFF, 0xFF @ ひこう
	type_name_entry gTypeName_Poison, TYPE_POISON, 0x45, 0x08, 0xFF, 0xFF, 0xFF @ どく
	type_name_entry gTypeName_Ground, TYPE_GROUND, 0x3D, 0x22, 0x2E, 0xFF, 0xFF @ じめん
	type_name_entry gTypeName_Rock, TYPE_ROCK, 0x02, 0x2C, 0xFF, 0xFF, 0xFF @ いわ
	type_name_entry gTypeName_Bug, TYPE_BUG, 0x21, 0x0C, 0xFF, 0xFF, 0xFF @ むし
	type_name_entry gTypeName_Ghost, TYPE_GHOST, 0x8B, 0xAE, 0x5D, 0x64, 0xFF @ ゴースト
	type_name_entry gTypeName_Steel, TYPE_STEEL, 0x1A, 0x37, 0x18, 0xFF, 0xFF @ はがね
	type_name_entry gTypeName_Mystery, TYPE_MYSTERY, 0xAC, 0xAC, 0xAC, 0xFF, 0xFF @ ？？？
	type_name_entry gTypeName_Fire, TYPE_FIRE, 0x1E, 0x19, 0x05, 0xFF, 0xFF @ ほのお
	type_name_entry gTypeName_Water, TYPE_WATER, 0x20, 0x3E, 0xFF, 0xFF, 0xFF @ みず
	type_name_entry gTypeName_Grass, TYPE_GRASS, 0x08, 0x0B, 0xFF, 0xFF, 0xFF @ くさ
	type_name_entry gTypeName_Electric, TYPE_ELECTRIC, 0x44, 0x2E, 0x07, 0xFF, 0xFF @ でんき
	type_name_entry gTypeName_Psychic, TYPE_PSYCHIC, 0x54, 0x5D, 0x9B, 0xAE, 0xFF @ エスパー
	type_name_entry gTypeName_Ice, TYPE_ICE, 0x0A, 0x05, 0x28, 0xFF, 0xFF @ こおり
	type_name_entry gTypeName_Dragon, TYPE_DRAGON, 0x95, 0x77, 0x8B, 0x7E, 0xFF @ ドラゴン
	type_name_entry gTypeName_Dark, TYPE_DARK, 0x01, 0x08, 0xFF, 0xFF, 0xFF @ あく

.if (. - gTypeNames) != (TYPE_DARK + 1) * TYPE_NAME_ENTRY_SIZE
    .error "gTypeNames has an unexpected byte size"
.endif

@ Preserve the two zero alignment bytes before gUnknown_82EBCE4.
	.balign 4, 0
