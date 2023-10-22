--ex 3
CREATE OR REPLACE FUNCTION demi_frere(
    num1 IN NUMBER,
    num2 IN NUMBER
) RETURN BOOLEAN IS
    pere1 NUMBER;
    mere1 NUMBER;
    pere2 NUMBER;
    mere2 NUMBER;
BEGIN
    SELECT pere, mere
    INTO pere1, mere1
    FROM personne
    WHERE numper = num1;

    SELECT pere, mere
    INTO pere2, mere2
    FROM personne
    WHERE numper = num2;

    IF (pere1 = pere2 OR mere1 = mere2) THEN
        RETURN TRUE;
    ELSE
        RETURN FALSE;
    END IF;
END;
/

--ex 4

CREATE OR REPLACE FUNCTION cousins(
    n1 IN NUMBER,
    n2 IN NUMBER
) RETURN BOOLEAN IS
    pere1 NUMBER;
    mere1 NUMBER;
    pere2 NUMBER;
    mere2 NUMBER;
    pgrandp1 NUMBER;
    pgrandp2 NUMBER;
    pgrandm1 NUMBER;
    pgrandm2 NUMBER;
    mgrandp1 NUMBER;
    mgrandp2 NUMBER;
    mgrandm1 NUMBER;
    mgrandm2 NUMBER;
BEGIN
    SELECT pere, mere
    INTO pere1, mere1
    FROM personne
    WHERE numper = n1;

    SELECT pere, mere
    INTO pere2, mere2
    FROM personne
    WHERE numper = n2;

    SELECT pere, mere
    INTO pgrandp1, pgrandm1
    FROM personne
    WHERE numper = pere1;
    
    SELECT pere, mere
    INTO pgrandp1, pgrandm1
    FROM personne
    WHERE numper = pere2;

    SELECT pere, mere
    INTO mgrandp1, mgrandm1
    FROM personne
    WHERE numper = mere1;

    SELECT pere, mere
    INTO mgrandp1, mgrandm1
    FROM personne
    WHERE numper = mere2;

    IF (mgrandp1 = mgrandp2 = pgrandp1 = pgrandp2 or mgrandm1=mgrandm2=pgrandm1=pgrandm2) THEN
        RETURN TRUE;
    ELSE
        RETURN FALSE;
    END IF;
END;
/
--ex 5
CREATE OR REPLACE PROCEDURE afficher_nom_et_pere(
    p_numper IN NUMBER
) IS
    v_nom VARCHAR2(50);
    v_pere NUMBER;
BEGIN
    SELECT nom INTO v_nom
    FROM personne
    WHERE numper = p_numper;

    DBMS_OUTPUT.PUT_LINE('Nom de la personne avec le numéro ' || p_numper || ': ' || v_nom);

    SELECT pere INTO v_pere
    FROM personne
    WHERE numper = p_numper;

    IF v_pere IS NOT NULL THEN
        afficher_nom_et_pere(v_pere);
    END IF;
END;
/
--ex 6
--?? curseur 