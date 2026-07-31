@ Emits one 12-byte BattleMove record.
@ The first argument is not stored; it verifies that table order matches MOVE_*.
.macro battle_move move:req, effect:req, power:req, moveType:req, accuracy:req, pp:req, secondaryChance:req, target:req, priority:req, flags:req
    .if ((. - gBattleMoves) / BATTLE_MOVE_ENTRY_SIZE) != \move
        .error "battle_move entry order does not match MOVE_* id"
    .endif

    .byte \effect, \power, \moveType, \accuracy, \pp, \secondaryChance
    .byte \target, \priority, \flags
    .fill BATTLE_MOVE_PADDING_SIZE, 1, BATTLE_MOVE_PADDING_VALUE
.endm
