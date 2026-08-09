@ Item effect bitfields (structless byte arrays used by ExecuteTableBasedItemEffect).
@ Values match pret/pokeemerald include/constants/item_effects.h.

@ field 0
.set ITEM0_X_ATTACK,         0x0F
.set ITEM0_DIRE_HIT,         0x30
.set ITEM0_SACRED_ASH,       0x40
.set ITEM0_INFATUATION,      0x80

@ field 1
.set ITEM1_X_SPEED,          0x0F
.set ITEM1_X_DEFEND,         0xF0

@ field 2
.set ITEM2_X_SPATK,          0x0F
.set ITEM2_X_ACCURACY,       0xF0

@ field 3
.set ITEM3_CONFUSION,        0x01
.set ITEM3_PARALYSIS,        0x02
.set ITEM3_FREEZE,           0x04
.set ITEM3_BURN,             0x08
.set ITEM3_POISON,           0x10
.set ITEM3_SLEEP,            0x20
.set ITEM3_LEVEL_UP,         0x40
.set ITEM3_GUARD_SPEC,       0x80
.set ITEM3_STATUS_ALL,       ITEM3_CONFUSION | ITEM3_PARALYSIS | ITEM3_FREEZE | ITEM3_BURN | ITEM3_POISON | ITEM3_SLEEP

@ field 4
.set ITEM4_EV_HP,            0x01
.set ITEM4_EV_ATK,           0x02
.set ITEM4_HEAL_HP,          0x04
.set ITEM4_HEAL_PP,          0x08
.set ITEM4_HEAL_PP_ONE,      0x10
.set ITEM4_PP_UP,            0x20
.set ITEM4_REVIVE,           0x40
.set ITEM4_EVO_STONE,        0x80

@ field 5
.set ITEM5_EV_DEF,           0x01
.set ITEM5_EV_SPEED,         0x02
.set ITEM5_EV_SPDEF,         0x04
.set ITEM5_EV_SPATK,         0x08
.set ITEM5_PP_MAX,           0x10
.set ITEM5_FRIENDSHIP_LOW,   0x20
.set ITEM5_FRIENDSHIP_MID,   0x40
.set ITEM5_FRIENDSHIP_HIGH,  0x80
.set ITEM5_FRIENDSHIP_ALL,   ITEM5_FRIENDSHIP_LOW | ITEM5_FRIENDSHIP_MID | ITEM5_FRIENDSHIP_HIGH

@ item-specific arguments beginning at field 6
.set ITEM6_HEAL_HP_FULL,     -1
.set ITEM6_HEAL_HP_HALF,     -2
.set ITEM6_HEAL_HP_LVL_UP,   -3
.set ITEM6_HEAL_PP_FULL,     0x7F
.set ITEM6_ADD_EV,            10
.set ITEM6_SUBTRACT_EV,      -10
