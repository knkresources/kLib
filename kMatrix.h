#ifndef __kMatrix_H
#define __kMatrix_H


    class kMatrix
    {
        private:

            float *buff;
            unsigned char buff_len;
            unsigned char m_rows;
            unsigned char m_cols;
            float * curr_element;

        public:


            kMatrix(void);
            kMatrix(unsigned char square_dimension);
            kMatrix(unsigned char rows, unsigned char cols);

            ~kMatrix(void);

            unsigned char rows(void);
            unsigned char cols(void);
            unsigned char size(void);


            float & operator ()(unsigned char row, unsigned char column);

            void operator = (const kMatrix & other);
            kMatrix & operator = (float num);

            void operator += (const kMatrix & other);
            void operator -= (const kMatrix & other);
            void operator *= (kMatrix & other);

            friend kMatrix operator + (const kMatrix & m1, const kMatrix & m2);
            friend kMatrix operator - (const kMatrix & m1, const kMatrix & m2);
            friend kMatrix operator * (kMatrix & m1,kMatrix & m2);
            kMatrix & operator ,(float num);
			
			float det(void);





    };

#endif