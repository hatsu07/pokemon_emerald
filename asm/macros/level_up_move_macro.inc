        .macro level_up_move level, move
        .2byte (\level << 9) | \move
        .endm
